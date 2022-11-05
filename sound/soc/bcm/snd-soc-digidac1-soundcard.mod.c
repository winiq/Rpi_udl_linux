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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x57a9e072, "devm_snd_soc_register_card" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0x13ae27f, "snd_soc_dai_set_pll" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa6bc220e, "snd_soc_add_component_controls" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0xf2afe284, "snd_soc_get_pcm_runtime" },
	{ 0x49500711, "snd_soc_dai_set_bclk_ratio" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x3ef69213, "snd_soc_dai_set_clkdiv" },
	{ 0x6e3dbefc, "snd_ctl_remove" },
	{ 0xd6b5ffb3, "snd_soc_dai_set_sysclk" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xe433c7dd, "snd_soc_card_get_kcontrol" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Crra,digidac1-soundcard");
MODULE_ALIAS("of:N*T*Crra,digidac1-soundcardC*");

MODULE_INFO(srcversion, "73BDD96770674EFFBAF8A35");
