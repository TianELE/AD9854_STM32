# AD9854_STM32
AD9854 BASE ON STM32  easy to transplant 基于STM32的AD9854  DDS;
基于STM32f1的AD9854控制程序 采用并行传输 程序简单 但需占用较多io口;
程序基于stm32 但可极方便的移植到其他平台;
可输出多路正交正弦信号 调幅波 调频波;
受测试仪器带宽限制 实测最高频率50MHz;
10MHz以下幅度能保持500mVPP 到20MHz幅值衰减至200mVPP 到50M时幅值衰减至40mVPP;
AD9854芯片特色 功耗离谱 输出四路正交信号时功率约为6.8W 发热严重 以至于连续测试10分钟后波形出现严重波动 随后直接罢工 建议必备导热胶 散热片
