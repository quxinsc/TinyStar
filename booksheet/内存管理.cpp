//栈--局部变量，函数参数，返回地址..【函数每一次运行都有一个独立的栈】【通过变量使用】
//堆--【内存段】使用nwe分配，delete释放【全局只有一个堆】【通过指针使用】
//自由存储区
//全局/静态存储区
//常量存储区
void fun()
{
    int a=0;
    a++;
}//函数运行结束，【栈自动释放】

///////重点！！！！
void fun()
{
    int *p=new int;//分配一个堆中的内存单元，指针p局部变量在栈区分配了内存地址【涉及两个内存地址】
    *p=100;//内存单元被赋值100
    delete p;//p指向内存单元被回收
}//函数运行完毕，栈被回收

//内存泄漏：指程序中已动态分配的堆内存由于某种原因【程序未释放或无法释放】，造成系统内存的浪费，导致程序运行速度减慢甚至系统崩溃等严重后果。
void main()
{
    fun();
    fun();
}