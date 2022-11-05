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
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0xeb70268e, "snd_soc_unregister_card" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf2afe284, "snd_soc_get_pcm_runtime" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x923c82d, "snd_soc_limit_volume" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xa11501a6, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dac");
MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dacC*");

MODULE_INFO(srcversion, "78D1F9616A1A8DBEE9A6AAD");
