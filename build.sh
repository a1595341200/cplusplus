cmake -DCMAKE_BUILD_TYPE=Debug -S . -B build -G "Unix Makefiles"
###
 # @Author: yao.xie 1595341200@qq.com
 # @Date: 2023-09-13 13:47:31
 # @LastEditors: yao.xie 1595341200@qq.com
 # @LastEditTime: 2023-10-09 23:00:50
 # @FilePath: /cplusplus/build.sh
 # @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
### 
cmake --build build -j8
