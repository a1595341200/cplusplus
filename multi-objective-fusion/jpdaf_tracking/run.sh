#! /bin/bash
###
 # @Author: yao.xie 1595341200@qq.com
 # @Date: 2023-10-19 09:59:01
 # @LastEditors: yao.xie 1595341200@qq.com
 # @LastEditTime: 2023-10-19 13:52:30
 # @FilePath: /cplusplus/multi-objective-fusion/jpdaf_tracking/run.sh
 # @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
### 
rootPath=`pwd`

echo `pwd`

cd ../../build/multi-objective-fusion/jpdaf_tracking

params=${rootPath}/config/params.txt

detection=${rootPath}/PETS09-S2L1/detection.txt

images=${rootPath}/PETS09-S2L1/img1 

./jpdaf_tracker ${params} \
 ${detection} \
 ${images} > 1.log
