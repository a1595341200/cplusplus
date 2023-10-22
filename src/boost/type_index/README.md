<!--
 * @Author: 谢瑶 
 * @Date: 2023-08-03 14:41:13
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-03 15:20:26
 * @FilePath: /type_index/README.md
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
-->
# tpye_index
## 仅头文件
1. 获得人类可读的类型信息
    [获得人类可读的类型信息](src/1.cpp)
2. 储存类型信息到容器
    [储存类型信息到容器](src/2.cpp)
3. 通过继承获得真实类型
    [通过继承获得真实类型](src/3.cpp)
在RTTI不可用或不需要的地方使用runtime_cast
    [在RTTI不可用或不需要的地方使用runtime_cast](src/4.cpp)
4. 精确类型匹配:使用const、volatile和引用限定符存储类型
    [精确类型匹配:使用const、volatile和引用限定符存储类型](src/5.cpp)
5. raw_name()和pretty_name()有和没有RTTI的输出表
    [raw_name()和pretty_name()有和没有RTTI的输出表](src/6.cpp)
