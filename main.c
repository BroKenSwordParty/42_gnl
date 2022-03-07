/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchamorr <jchamorr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:34:27 by ibaines           #+#    #+#             */
/*   Updated: 2022/03/02 16:44:28 by jchamorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
char    *get_next_line(int fd);
int main (void)
{
    int fd;
    int i;
    char *pnt;

    i = 1;
//  char buf[10];
//  ssize_t nbytes;
    fd = open("/Users/jchamorr/Documents/Cursus/Projects/get_next_line/Planteamiento.txt", O_RDONLY);
    if (fd == -1)
    {
        printf("error\n");
    }
    else
    {
        /*printf("%d", fd);
        nbytes = read(fd, buf, 5);
        buf[nbytes] = '\0';
        close(fd);
        if (nbytes == 0)
            printf("archivo vacio\n");
        else*/
//while (i < 3)
        pnt = get_next_line(fd);
        while(pnt)
        {  
            pnt = get_next_line(fd);
            i++;
        }
     
            //      
//      printf("\n***********\nSegunda linea: %s\n", get_next_line(fd));
//      printf("\n***********\nTercera linea: %s\n", get_next_line(fd));
//          printf("\n***********\nCuarta linea: %s\n", get_next_line(fd));
        //  printf("\n***********\nQuinta linea: %s\n", get_next_line(fd));
        //  printf("\n***********\nSexta linea: %s\n", get_next_line(fd));
    }
    close (fd);
    return (0);
}
