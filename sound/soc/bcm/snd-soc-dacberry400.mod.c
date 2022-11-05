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
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0x3bcecf1c, "snd_soc_dapm_info_pin_switch" },
	{ 0x4adabb50, "snd_soc_dapm_put_pin_switch" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0xeb70268e, "snd_soc_unregister_card" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf2afe284, "snd_soc_get_pcm_runtime" },
	{ 0x49500711, "snd_soc_dai_set_bclk_ratio" },
	{ 0x9b8dbf20, "snd_soc_dapm_get_pin_switch" },
	{ 0x92997ed8, "_printk" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0xd6b5ffb3, "snd_soc_dai_set_sysclk" },
	{ 0xcdfcd18e, "snd_soc_component_read" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xa11501a6, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cosaelectronics,dacberry400");
MODULE_ALIAS("of:N*T*Cosaelectronics,dacberry400C*");

MODULE_INFO(srcversion, "9A2B827C68524A6B2D0A34A");