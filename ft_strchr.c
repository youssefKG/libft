
char *ft_strchr(const char *str, char c) {
  char *first_occu;
  int i;

  if (!str)
    return 0;
  i = 0;
  while (str[i]) {
    if (str[i] == c) 
      return str + i;
  return 0;
}
