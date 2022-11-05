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
	{ 0xbf0ef43d, "__devm_regmap_init_spi" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0xfac8d605, "snd_pcm_hw_constraint_list" },
	{ 0xa6bc220e, "snd_soc_add_component_controls" },
	{ 0xadcac529, "driver_unregister" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x92997ed8, "_printk" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x81e362e8, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,regmap-spi,snd-soc-core");

MODULE_ALIAS("of:N*T*Cwlf,wm8741");
MODULE_ALIAS("of:N*T*Cwlf,wm8741C*");
MODULE_ALIAS("i2c:wm8741");

MODULE_INFO(srcversion, "EEC3A494E9AE9D9B49059B7");
