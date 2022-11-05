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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x3967f406, "regulator_disable" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa6bc220e, "snd_soc_add_component_controls" },
	{ 0x54298c33, "gpiod_direction_output_raw" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0xb289750f, "of_get_named_gpio_flags" },
	{ 0xb39b68f7, "regcache_mark_dirty" },
	{ 0x6968fb56, "gpiod_set_raw_value" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x924f4b61, "devm_gpio_request" },
	{ 0x81e362e8, "regcache_sync" },
	{ 0xd07c71eb, "regcache_cache_only" },
	{ 0xd769d20f, "regulator_enable" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("i2c:tpa6130a2");
MODULE_ALIAS("i2c:tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2C*");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2C*");

MODULE_INFO(srcversion, "C950EFBB953CCE252357E67");
