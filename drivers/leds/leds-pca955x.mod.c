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
	{ 0xfada9c15, "of_fwnode_ops" },
	{ 0xf038e45, "devm_led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x97fd9c7c, "i2c_match_id" },
	{ 0xa3bc5fda, "fwnode_property_read_string" },
	{ 0xd8eb9296, "fwnode_property_read_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb370785c, "device_get_next_child_node" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x2ae3aaa6, "device_get_child_node_count" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9550");
MODULE_ALIAS("of:N*T*Cnxp,pca9550C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9551");
MODULE_ALIAS("of:N*T*Cnxp,pca9551C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9552");
MODULE_ALIAS("of:N*T*Cnxp,pca9552C*");
MODULE_ALIAS("of:N*T*Cibm,pca9552");
MODULE_ALIAS("of:N*T*Cibm,pca9552C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9553");
MODULE_ALIAS("of:N*T*Cnxp,pca9553C*");
MODULE_ALIAS("i2c:pca9550");
MODULE_ALIAS("i2c:pca9551");
MODULE_ALIAS("i2c:pca9552");
MODULE_ALIAS("i2c:ibm-pca9552");
MODULE_ALIAS("i2c:pca9553");

MODULE_INFO(srcversion, "8FBC5A52518699826404C5A");
