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
	{ 0x73053428, "dev_err_probe" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x2dca9a, "__irq_resolve_mapping" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe5557ffb, "devm_pinctrl_register" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xffde228, "gpiochip_get_data" },
	{ 0xd0a227b9, "handle_simple_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2f4968cb, "pinctrl_dev_get_drvdata" },
	{ 0xe11e8538, "pinconf_generic_dt_free_map" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x9609ced3, "devm_gpiochip_add_data_with_key" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x81e362e8, "regcache_sync" },
	{ 0xd07c71eb, "regcache_cache_only" },
	{ 0x9f350db3, "pinconf_generic_dt_node_to_map" },
	{ 0xdf240d2f, "device_property_present" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5DAD80BCDA2312630C4483");
