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
	{ 0xdd64e639, "strscpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:saa7127_auto");
MODULE_ALIAS("i2c:saa7126");
MODULE_ALIAS("i2c:saa7127");
MODULE_ALIAS("i2c:saa7128");
MODULE_ALIAS("i2c:saa7129");

MODULE_INFO(srcversion, "1692350FA2DFCB4039EB503");