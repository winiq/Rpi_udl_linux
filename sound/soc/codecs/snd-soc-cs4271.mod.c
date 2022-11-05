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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x54298c33, "gpiod_direction_output_raw" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6ad73e27, "of_match_device" },
	{ 0xeaf193c9, "snd_ctl_boolean_mono_info" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0xb289750f, "of_get_named_gpio_flags" },
	{ 0xb22f8129, "of_get_property" },
	{ 0xb39b68f7, "regcache_mark_dirty" },
	{ 0x6968fb56, "gpiod_set_raw_value" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x924f4b61, "devm_gpio_request" },
	{ 0x81e362e8, "regcache_sync" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Ccirrus,cs4271");
MODULE_ALIAS("of:N*T*Ccirrus,cs4271C*");

MODULE_INFO(srcversion, "B9C1C44D76F8817F838A872");
