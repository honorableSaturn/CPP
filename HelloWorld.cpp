#include<iostream>


int main()
{
  //
  // First program to compile
  std::cout << "Hello world!" << std::endl;

  //
  // Pointer
  int * a = (int *) malloc( 4 * sizeof(int) );
  int * b = (int *) malloc( 4 * sizeof(int) );
  a[0] = 2;
  a[1] = 3;
  a[2] = 4;
  a[3] = 5;
  a[100] = 200;
  b[0] = 2;
  b[1] = 3;
  b[2] = 4;
  b[3] = 5;
  b[100] = 200;
  //
  for ( int i = 0 ; i < 11 ; i++ )
    {
      std::cout << "a["<<i<<"] = " << a[i] << std::endl;
    }
  
  std::cout << "a+1 = " << (a+2) << std::endl;
  delete [] a;
  a = nullptr;

  std::cout << "a+1 = " << (a+2) << std::endl;
  //
  // 
  return 1;
}
