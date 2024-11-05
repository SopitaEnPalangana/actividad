g++ -I./include -c ./src/article.cpp
g++ -I./include -c ./src/customer.cpp
g++ -I./include -c ./src/order.cpp
g++ -I./include -c main.cpp

g++ -I./include article.o customer.o order.o main.o -o app.exe

DEL *.o

app.exe