int simpleMultiplication(int a)
{
  // Your code
  // if (a % 2 == 0)
  // {
  //   return a * 8;
  // }
  // else
  // {
  //   return a * 9;
  // }
  return a % 2 ? 9 * a : 8 * a;
}