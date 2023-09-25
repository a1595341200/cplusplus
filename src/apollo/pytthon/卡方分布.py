'''
Author: yao.xie 1595341200@qq.com
Date: 2023-09-26 13:10:52
LastEditors: yao.xie 1595341200@qq.com
LastEditTime: 2023-09-27 10:10:10
FilePath: /cplusplus/src/apollo/pytthon/卡方分布.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
from scipy.stats import chi2
import matplotlib.pyplot as plt
import numpy as np
fig, ax = plt.subplots(1, 1)
df = 2
res = chi2.pdf(x = 1,df=df)
print(res)
