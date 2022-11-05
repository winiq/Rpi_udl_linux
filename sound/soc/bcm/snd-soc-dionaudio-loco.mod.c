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
	{ 0xde164253, "__platform_driver_register" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x49500711, "snd_soc_dai_set_bclk_ratio" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x81c1d19d, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Cdionaudio,loco-pcm5242-tpa3118");
MODULE_ALIAS("of:N*T*Cdionaudio,loco-pcm5242-tpa3118C*");

MODULE_INFO(srcversion, "82E61FCE83D36B7D6A2C6AB");
