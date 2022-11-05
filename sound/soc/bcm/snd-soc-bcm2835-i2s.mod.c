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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7e5194c3, "snd_soc_dai_active" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x19b12254, "devm_snd_dmaengine_pcm_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xcaa8f6b0, "__of_get_address" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x296e078d, "__devm_regmap_init_mmio_clk" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x175807a4, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2s");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2sC*");

MODULE_INFO(srcversion, "2BFFBA5DA702C2571D64012");
