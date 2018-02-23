#include <jutils.hpp>

#include <QGuiApplication>
#include <QLabel>

int main()
{
  Proctimer my_timer;
  QLabel label();
  my_timer.get_start_time();

  cout << "Hello World!" << endl;
  sleep(1);

  my_timer.get_end_time("Hello world");

  return 0;
}
