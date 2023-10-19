<!--
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-19 09:49:43
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-19 15:09:25
 * @FilePath: /cplusplus/jpdaf_tracking/README.md
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
-->
- [1. 多目标关联](#1-多目标关联)
  - [1.1. Joint Probabilistic Data Association Tracking (JPDAFTracker)](#11-joint-probabilistic-data-association-tracking-jpdaftracker)
    - [1.1.1. Requirements](#111-requirements)
    - [1.1.2. How to build](#112-how-to-build)
    - [1.1.3. Params](#113-params)
    - [1.1.4. How to use](#114-how-to-use)
    - [1.1.5. 公式参考链接](#115-公式参考链接)
# 1. 多目标关联
## 1.1. Joint Probabilistic Data Association Tracking (JPDAFTracker)
JPDAFTracker is a tracker based on joint probabilistic data association filtering.

<p align="center">
<a href="https://www.youtube.com/watch?v=KlXpaKh8hDY"  target="_blank"><img src="https://img.youtube.com/vi/KlXpaKh8hDY/0.jpg"/></a>
</p>
<br>

### 1.1.1. Requirements
* OpenCV
* Eigen

### 1.1.2. How to build

JPDAFTracker works under Linux environments. I recommend a so-called out of source build which can be achieved by the following command sequence:

* mkdir build
* cd build
* cmake ../
* make -j<number-of-cores+1>

### 1.1.3. Params
```bash
[PD] #DETECTION PROBABILITY
1

[PG] #GATE PROBABILITY
0.4

[LOCAL_GSIGMA] #THRESHOLD OF GATING
15

[LOCAL_ASSOCIATION_COST] #ASSOCIATION COSTS
40

[GLOBAL_GSIGMA] #THRESHOLD OF GATING
0.1

[GLOBAL_ASSOCIATION_COST] #ASSOCIATION COSTS
50

[LAMBDA] #CONSTANT
2

[GAMMA] #G1,G2 INITIAL COVARIANCE P MATRIX
10 10

[R_MATRIX] #2x2 MEASUREMENT NOISE COVARIANCE MATRIX
100 0
0 100

[DT] #dt
0.4

[MIN_ACCPETANCE_RATE] #min rate for convalidating a track
10

[MAX_MISSED_RATE] #max rate for deleting a track
9
```

### 1.1.4. How to use

Go to the bin diretory and launch the program with the following command:
```bash
./jpdaf_tracker ../config/kalman_param.txt /path/to/the/detection_file.txt /path/to/the/image_folder 
```
### 1.1.5. 公式参考链接
1. pdaf https://zhuanlan.zhihu.com/p/176851546
2. jpdaf https://zhuanlan.zhihu.com/p/181691698
3. jpdaf https://zhuanlan.zhihu.com/p/510692327
4. jpdaf https://zhuanlan.zhihu.com/p/642298064
