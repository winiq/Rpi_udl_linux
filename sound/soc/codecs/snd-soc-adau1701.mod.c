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
	{ 0xac28c00e, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0x40fe5cd0, "devm_sigmadsp_init_i2c" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x392195b, "sigmadsp_attach" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0xfc0c9a7b, "of_property_read_variable_u8_array" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xccf71bc4, "sigmadsp_reset" },
	{ 0x50ceb521, "sigmadsp_setup" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8f03979a, "devm_gpio_request_one" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x77a3b528, "sigmadsp_restrict_params" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0xb289750f, "of_get_named_gpio_flags" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0xb39b68f7, "regcache_mark_dirty" },
	{ 0x59672155, "gpiod_set_raw_value_cansleep" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x81e362e8, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-sigmadsp-i2c,snd-soc-core,snd-soc-sigmadsp");

MODULE_ALIAS("of:N*T*Cadi,adau1701");
MODULE_ALIAS("of:N*T*Cadi,adau1701C*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "189944F8B7B7C50C99A5421");
