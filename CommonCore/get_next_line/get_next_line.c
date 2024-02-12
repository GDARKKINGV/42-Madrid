/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:36:16 by jugirald          #+#    #+#             */
/*   Updated: 2023/10/25 16:01:46 by jugirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*myfree(char **fd_storage)
{
	free(*fd_storage);
	*fd_storage = NULL;
	return (NULL);
}

char	*free_read_line(char *fd_storage)
{
	char	*new_storage;
	char	*ptr;
	int		len;

	ptr = ft_strchr(fd_storage, '\n');
	if (!ptr)
	{
		new_storage = NULL;
		return (myfree(&fd_storage));
	}
	else
		len = ptr - fd_storage + 1;
	if (!fd_storage[len])
		return (myfree(&fd_storage));
	new_storage = ft_substr(fd_storage, len, ft_strlen(fd_storage) - len);
	myfree(&fd_storage);
	if (!new_storage)
		return (NULL);
	return (new_storage);
}

char	*ft_get_line(char *fd_storage)
{
	char	*line;
	char	*ptr;
	int		line_size;

	ptr = ft_strchr(fd_storage, '\n');
	if (!ptr)
		line_size = (int)ft_strlen(fd_storage);
	else
		line_size = ptr - fd_storage + 1;
	line = ft_substr(fd_storage, 0, line_size);
	if (!line)
		return (NULL);
	return (line);
}

char	*read_fd(int fd, char *fd_storage)
{
	char	*buffer;
	int		read_result;

	read_result = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (myfree(&fd_storage));
	buffer[0] = '\0';
	while (read_result > 0 && !ft_strchr(fd_storage, '\n'))
	{
		read_result = read(fd, buffer, BUFFER_SIZE);
		if (read_result > 0)
		{
			buffer[read_result] = '\0';
			fd_storage = ft_strjoin(fd_storage, buffer);
		}
	}
	free(buffer);
	if (read_result == -1)
		return (myfree(&fd_storage));
	return (fd_storage);
}

char	*get_next_line(int fd)
{
	static char	*fd_storage;
	char		*line;

	if (fd < 0)
		return (NULL);
	if (!fd_storage || !ft_strchr(fd_storage, '\n'))
		fd_storage = read_fd(fd, fd_storage);
	if (!fd_storage)
		return (NULL);
	line = ft_get_line(fd_storage);
	if (!line)
		return (myfree(&fd_storage));
	fd_storage = free_read_line(fd_storage);
	return (line);
}

/* int main()
{
	int	fd = open("test.txt", O_RDONLY);
	char	*str = get_next_line(fd);
	printf("%s\n", str);

	return (0);
} */
