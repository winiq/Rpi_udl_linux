#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x57a9e072, "devm_snd_soc_register_card" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0x13ae27f, "snd_soc_dai_set_pll" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x818880ec, "of_match_node" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x49500711, "snd_soc_dai_set_bclk_ratio" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ef69213, "snd_soc_dai_set_clkdiv" },
	{ 0xd6b5ffb3, "snd_soc_dai_set_sysclk" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x81c1d19d, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cjustboom,justboom-digi");
MODULE_ALIAS("of:N*T*Cjustboom,justboom-digiC*");
MODULE_ALIAS("of:N*T*Ciqaudio,wm8804-digi");
MODULE_ALIAS("of:N*T*Ciqaudio,wm8804-digiC*");
MODULE_ALIAS("of:N*T*Callo,allo-digione");
MODULE_ALIAS("of:N*T*Callo,allo-digioneC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-digi");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-digiC*");

MODULE_INFO(srcversion, "E21B7867E1AC6BA9F69B8A6");
