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
	{ 0x5861226b, "regulator_unregister_notifier" },
	{ 0xdc7f230e, "v4l2_async_register_subdev" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0xa1826914, "regulator_register_notifier" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0x3967f406, "regulator_disable" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x7a07fce0, "v4l2_async_unregister_subdev" },
};

MODULE_INFO(depends, "v4l2-async,mc,videodev");

MODULE_ALIAS("of:N*T*Cadi,ad5398");
MODULE_ALIAS("of:N*T*Cadi,ad5398C*");
MODULE_ALIAS("i2c:ad5398");

MODULE_INFO(srcversion, "33C338E84074529111F438D");
