# vector容器
动态插入，动态删除；连续存储；类型不限；
**使用要包含头文件`include<vector>`**

1. 创建：
```
vector<int> a; // 创建空vector容器，内部存储变量为int类型
vector<int> a(5); // 创建内含5个默认值（0）的vector容器
vecotr<int> a(5, 10); // 创建内涵5个10的vector容器
vecotr<int> a = {1,2,3,4,5}; // 另一种初始化方法
```
2. 添加（push_back()方法）：
```
a.push_back(10);
```
3. 访问
```
int num = a[3]; // 索引法访问元素
```
4. 访问元素的数量(size()方法！不是length()！)
```
int len = a.size();
```
5. 迭代访问
```
// 方法1
for(auto it = a.begin(); it != a.end(); it++){
    cout << *it << endl; // it实际上是指向元素的指针，因此*it代表对应元素
}
// 方法2
for(int element : a){
    cout << element << endl;
}
```
6. 特定元素的删除（erase()）
```
a.erase(a.begin() + 2); // 删除第三个元素
```
7. 清空vector
```
a.clear();
```




