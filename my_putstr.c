void	my_putchar(char c)
{
  write(1, &c, 1);
}


int	my_putstr(char *str)
{
  printf(str);
  return(0);
}


int	main(void)
{
  my_putstr("Hello World");
  printf("\n");
  return(0);
}
