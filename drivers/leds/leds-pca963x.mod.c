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
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc1ae1034, "fwnode_handle_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0xf038e45, "devm_led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd8eb9296, "fwnode_property_read_u32_array" },
	{ 0xb370785c, "device_get_next_child_node" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x2ae3aaa6, "device_get_child_node_count" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9632");
MODULE_ALIAS("of:N*T*Cnxp,pca9632C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9633");
MODULE_ALIAS("of:N*T*Cnxp,pca9633C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9634");
MODULE_ALIAS("of:N*T*Cnxp,pca9634C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9635");
MODULE_ALIAS("of:N*T*Cnxp,pca9635C*");
MODULE_ALIAS("i2c:pca9632");
MODULE_ALIAS("i2c:pca9633");
MODULE_ALIAS("i2c:pca9634");
MODULE_ALIAS("i2c:pca9635");

MODULE_INFO(srcversion, "6E6821458CECB8FB434D788");
