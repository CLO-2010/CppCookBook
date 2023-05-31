/*
* 从这一章节开始，我会默认你们已经掌握基本的数据类型、运算符以及循环和分支结构，对于部分难懂的内容会进行分开讲解
* 从基础开始学习STL容器和基本的数据结构
* 了解这些容器的增删改查和应用场景
*/

/*
* 浅谈vector
* 在C++中，有一个和vector非常类似的东西，就是stack，他们基本的数据结构是类似的，但是在最终提供的接口上有所不同
* 即，可以用stack实现的，vector一定能实现，但是vector具有更多stack不具有的功能，也能更方便新手使用和理解
* 
* vector和stack一样，都是一个先进后出或者叫后进先出(FILO/LIFO)的数据结构
* 例如在vector中按序存放1 2 3，我们取出的时候默认会先取出3，然后是2、1
* 例如push_back和pop_back操作(后续会讲到)都是在vector的尾部进行的
* 
*/

#include <vector>
//这是vector(向量)的头文件
using namespace std;
//使用std的命名空间
/*
	命名空间

	为了避免不同组织开发的同名函数、类、对象、常量等在编译时发生混淆，导致编译器报错，因此诞生了命名空间

	命名空间就像是一个编号放在前面，用于标识其来源

	例如std::vector标识了vector这个类来自于std标准库，而using namespace std这句语句会让编译器在发生冲突时直接使用std命名空间中的函数、类、对象、常量等

	若不使用using namespace，则必须指定命名空间，例如 std::vector<int> demo;
*/

//vector涉及到泛型的内容，即vector中涉及到的数据类型是不定的，会使用一个模板占位符去替代，即vector可以存放各种类型的数据，我们在使用时需要在<>内指定类型，如下
int main() {
	vector<int> tutorial;
	//我们就创建了一个存放int类型数据的向量 tutorial

	tutorial.push_back(1);
	//我们对tutorial的尾部添加一个元素 1
	
	for (int i = 0; i < 5; ++i) {
		tutorial.push_back(i);
	}
	//先使用0到4填充tutorial
	
	tutorial.pop_back();
	//再对tutorial尾部弹出一个元素

	int num;
	num = *tutorial.end();
	//将tutorial尾部的元素指针读取后取出对应的数值并存放到int中，其中*在这里表示取出指针指向的数值(仅对 *指针 这种有效，最终读取到的数据取决于指针指向的数据类型)
	//类似地 int *p是在声明一个int类型的数，而恰好，这个数是对p这个指针取出其数值得到的，所以此处也同时声明了一个int类型数据对应的指针p

	/*
	* 此时num的值为3
	*/

	tutorial.at(0) = 100;

	num = tutorial[0];
	//上面的两个操作是类似的，无论是使用at函数还是直接使用下标的方式访问vector中对应位置的元素都是可以的(可以读取也可以改写)

	/*
	* 此时num的值为100
	*/

	bool ifEmpty;

	ifEmpty = tutorial.empty();
	//该函数用于检测tutorial是否为空，并返回一个bool值


	int size;

	size = tutorial.size();
	//该函数用于返回tutorial的向量长度

	//在vector中还有erase操作，用于删除数据，但是由于其涉及到迭代器，我们会在后续再讲
}

