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
	{ 0xd90bb8ee, "snd_soc_dapm_get_enum_double" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0x13ae27f, "snd_soc_dai_set_pll" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xe59d4104, "snd_soc_component_set_pll" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xeaf193c9, "snd_ctl_boolean_mono_info" },
	{ 0xf2afe284, "snd_soc_get_pcm_runtime" },
	{ 0x49500711, "snd_soc_dai_set_bclk_ratio" },
	{ 0x3ef69213, "snd_soc_dai_set_clkdiv" },
	{ 0xd6b5ffb3, "snd_soc_dai_set_sysclk" },
	{ 0x1d940e1e, "snd_soc_component_set_sysclk" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xa13a7a1e, "snd_pcm_hw_constraint_minmax" },
	{ 0xcdfcd18e, "snd_soc_component_read" },
	{ 0xcd2ebf6d, "snd_soc_dai_set_tdm_slot" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0x89df9ed6, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");

MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrus");
MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrusC*");

MODULE_INFO(srcversion, "923FC751286E458A8F9F4DA");
