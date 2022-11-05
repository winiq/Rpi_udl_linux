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
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xf038e45, "devm_led_classdev_register_ext" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xb22f8129, "of_get_property" },
	{ 0xd6748ca5, "irq_of_parse_and_map" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x83eb276e, "of_get_next_child" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x269fdf77, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:cap1106");
MODULE_ALIAS("i2c:cap1126");
MODULE_ALIAS("i2c:cap1188");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1106");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1106C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1126");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1126C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1188");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1188C*");

MODULE_INFO(srcversion, "6EC43A9AD3A14663E84A5F6");
