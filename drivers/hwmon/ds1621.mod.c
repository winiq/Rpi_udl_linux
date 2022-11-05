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
	{ 0x826655e4, "param_ops_int" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xf2560f6a, "devm_hwmon_device_register_with_groups" },
	{ 0x55bec97e, "i2c_smbus_write_byte" },
	{ 0x97fd9c7c, "i2c_match_id" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xc46051e2, "i2c_smbus_write_word_data" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb156d5c3, "i2c_smbus_read_word_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x96848186, "scnprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ds1621");
MODULE_ALIAS("i2c:ds1625");
MODULE_ALIAS("i2c:ds1631");
MODULE_ALIAS("i2c:ds1721");
MODULE_ALIAS("i2c:ds1731");

MODULE_INFO(srcversion, "0C2F05D3AA9337AFEDF4C26");
