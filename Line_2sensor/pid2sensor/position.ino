void position1()  
{
  int set = 50;
  if (map1 >= set && map2 >= set) position = 0;
  else if (map2 <= set)position = -100 + map2;
  else if (map1 <= set)position = 100 - map1;
}
void position2() 
{
  int set = 50;
  if (map3 >= set && map4 >= set) position = 0;
  else if (map3 <= set)position = 100 - map3;
  else if (map4 <= set)position = -100 + map4;
}
