cmd_drivers/media/i2c/modules.order := {   echo drivers/media/i2c/msp3400.ko;   cat drivers/media/i2c/cx25840/modules.order;   echo drivers/media/i2c/arducam_64mp.ko;   echo drivers/media/i2c/arducam-pivariety.ko;   echo drivers/media/i2c/tvaudio.ko;   echo drivers/media/i2c/tda7432.ko;   echo drivers/media/i2c/saa6588.ko;   echo drivers/media/i2c/tda9840.ko;   echo drivers/media/i2c/tea6415c.ko;   echo drivers/media/i2c/tea6420.ko;   echo drivers/media/i2c/saa7110.ko;   echo drivers/media/i2c/saa7115.ko;   echo drivers/media/i2c/saa717x.ko;   echo drivers/media/i2c/saa7127.ko;   echo drivers/media/i2c/saa7185.ko;   echo drivers/media/i2c/saa6752hs.ko;   echo drivers/media/i2c/ad5398_vcm.ko;   echo drivers/media/i2c/adv7170.ko;   echo drivers/media/i2c/adv7175.ko;   echo drivers/media/i2c/adv7180.ko;   echo drivers/media/i2c/adv7604.ko;   echo drivers/media/i2c/adv7842.ko;   echo drivers/media/i2c/adv7511-v4l2.ko;   echo drivers/media/i2c/vpx3220.ko;   echo drivers/media/i2c/bt819.ko;   echo drivers/media/i2c/bt856.ko;   echo drivers/media/i2c/bt866.ko;   echo drivers/media/i2c/ks0127.ko;   echo drivers/media/i2c/tvp5150.ko;   echo drivers/media/i2c/tw2804.ko;   echo drivers/media/i2c/tw9903.ko;   echo drivers/media/i2c/tw9906.ko;   echo drivers/media/i2c/cs3308.ko;   echo drivers/media/i2c/cs5345.ko;   echo drivers/media/i2c/cs53l32a.ko;   echo drivers/media/i2c/m52790.ko;   echo drivers/media/i2c/uda1342.ko;   echo drivers/media/i2c/wm8775.ko;   echo drivers/media/i2c/wm8739.ko;   echo drivers/media/i2c/vp27smpx.ko;   echo drivers/media/i2c/sony-btf-mpx.ko;   echo drivers/media/i2c/upd64031a.ko;   echo drivers/media/i2c/upd64083.ko;   echo drivers/media/i2c/ov2311.ko;   echo drivers/media/i2c/ov2640.ko;   echo drivers/media/i2c/ov5647.ko;   echo drivers/media/i2c/ov7251.ko;   echo drivers/media/i2c/ov7640.ko;   echo drivers/media/i2c/ov9281.ko;   echo drivers/media/i2c/ov9734.ko;   echo drivers/media/i2c/irs1125.ko;   echo drivers/media/i2c/mt9v011.ko;   echo drivers/media/i2c/ir-kbd-i2c.ko;   echo drivers/media/i2c/tc358743.ko;   echo drivers/media/i2c/imx219.ko;   echo drivers/media/i2c/imx258.ko;   echo drivers/media/i2c/imx290.ko;   echo drivers/media/i2c/imx296.ko;   echo drivers/media/i2c/imx477.ko;   echo drivers/media/i2c/imx519.ko; :; } | awk '!x[$$0]++' - > drivers/media/i2c/modules.order