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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xeb70268e, "snd_soc_unregister_card" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0xf2afe284, "snd_soc_get_pcm_runtime" },
	{ 0x49500711, "snd_soc_dai_set_bclk_ratio" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0x6e3dbefc, "snd_ctl_remove" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xa11501a6, "snd_soc_register_card" },
	{ 0xe433c7dd, "snd_soc_card_get_kcontrol" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");

MODULE_ALIAS("of:N*T*Cpifi,pifi-40");
MODULE_ALIAS("of:N*T*Cpifi,pifi-40C*");

MODULE_INFO(srcversion, "9D8B911F7C4A191CD7120DE");
