# Wrynose 

- Kernel version: 6.18.X
- Released year: 2026
- Kernel support by Adlink(continuing).
- Manifest of the Yocto BSP is [here](https://github.com/ADLINK/adlink-manifest/tree/intel-yocto-wrynose).
ynose


## 1. Supported Recipes by Adlink

| **meta name**       | **Branch** | **commit version**                        |
| :------------------ | :--------- | :---------------------------------------  |
| bitbake             |  2.18      |  fae9db3168dbff1b8c76fe9c6726a9687ff97514 |
| openembedded-core   |  wrynose   |  f09a0f28aeb54ddd90415dd458338e1565bb5a49 | 
| meta-yocto          |  wrynose   |  1b132647002eea43a2c7a7f857f63f42dacbc26c | 
| meta-openembedded   |  wrynose   |  af8b6d6b2f0b11595b0a0d5b82efa3129d52a628 | 
| meta-intel          |  wrynose   |  d6d72afd6ae820e57845d3b2885196ddfb224f26 | 
| meta-openvino       |  wrynose   |  12dac884b60adff733a71b92cad537483a9b6888 | 
| meta-adlink-intel   |  wrynose   |  5385fa1e5f1fc4a9b127c96aa9d5485d8e351c03 | 
| meta-adlink-sema    |            |  9e511f1546db812ae76a903f140b85b75daedc0e | 
| meta-security       |  wrynose   |  c0d1d6200e7a84c39fb940cb1f22aad4b0b3d808 | 
| meta-virtualization |  wrynose   |  d7b0cd1e5f0f28aec111137f4490763d5db01fd6 | 
| meta-secure-core    |  wrynose   |  07a99ae241acd488a2feda1ededf87dc70dfde80 | 

## 2. Supported Modules 

| **Module Name**                                              |
| :----------------------------------------------------------- |
| COM-HPC-cRLS ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COM-HPC-Client-Module/COM-HPC-cRLS))<BR> |
| COM-HPC-sIDH ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COM-HPC-Server-Module/COM-HPC-sIDH))<BR> |
| cExpress-MTL ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType6Compact/cExpress-MTL?lang=en))<BR> |
| Express-ADP ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType6/Express-ADP))<BR> |
| cExpress-ASL/ALN ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType6Compact/cExpress-ALN))<BR> |
| cExpress-EL ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType6Compact/cExpress-EL?lang=en))<BR> |
| cExpress-WL ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType6Compact/cExpress-WL?lang=en))<BR> |
| cExpress-KL ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType6Compact/cExpress-KL?lang=en))<BR> |
| Express-SL/SLE ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType6/Express-SL_SLE?lang=en))<BR> |
| Express-RLP ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType6/Express-RLP?lang=en))<BR> |
| Express-ADP ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType6/Express-ADP?lang=en))<BR> |
| nanoX-EL ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType10/nanoX-EL?lang=en))<BR> |
| LEC-EL ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/SMARC/LEC-EL?lang=en))<BR> |
| LEC-ASL/ALN ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/SMARC/LEC-ASL?lang=en))<BR> |
| EXPRESS-ID7 ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType7/Express-ID7?lang=en))<BR> |
| Express-TL ([More Details](https://www.adlinktech.com/Products/Computer_on_Modules/COMExpressType6/Express-TL))<BR> |

## 3. Documentation

Refer to the [wiki](https://github.com/ADLINK/meta-adlink-intel/wiki) page for instructions on building the Yocto as well as flashing the image.

> [!NOTE]
>
> This Yocto meta-layer licensed under the MIT License.
> Individual recipes build software under their respective licenses.

