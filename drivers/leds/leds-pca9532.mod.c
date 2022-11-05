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
	{ 0x40061ad3, "input_register_device" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0x966957d4, "led_classdev_register_ext" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0x5919b3b4, "of_get_next_available_child" },
	{ 0xfc0c9a7b, "of_property_read_variable_u8_array" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0xfaf784d, "led_classdev_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9530");
MODULE_ALIAS("of:N*T*Cnxp,pca9530C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9531");
MODULE_ALIAS("of:N*T*Cnxp,pca9531C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9532");
MODULE_ALIAS("of:N*T*Cnxp,pca9532C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9533");
MODULE_ALIAS("of:N*T*Cnxp,pca9533C*");
MODULE_ALIAS("i2c:pca9530");
MODULE_ALIAS("i2c:pca9531");
MODULE_ALIAS("i2c:pca9532");
MODULE_ALIAS("i2c:pca9533");

MODULE_INFO(srcversion, "925A196567E392FE90E6BD2");
