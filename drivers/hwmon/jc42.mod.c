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
	{ 0x4c361bcb, "devm_hwmon_device_register_with_info" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb156d5c3, "i2c_smbus_read_word_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc46051e2, "i2c_smbus_write_word_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cjedec,jc-42.4-temp");
MODULE_ALIAS("of:N*T*Cjedec,jc-42.4-tempC*");
MODULE_ALIAS("i2c:jc42");

MODULE_INFO(srcversion, "E5AB5F461A178646E0AA5FB");
