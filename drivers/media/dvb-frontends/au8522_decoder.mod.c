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
	{ 0xa960c6f6, "v4l2_ctrl_subdev_log_status" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfbc81099, "au8522_readreg" },
	{ 0xe812c42a, "au8522_writereg" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x1ca7743a, "au8522_get_state" },
	{ 0xdb5cb298, "au8522_release_state" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
};

MODULE_INFO(depends, "videodev,au8522_common,mc");

MODULE_ALIAS("i2c:au8522");

MODULE_INFO(srcversion, "23150F46184763180E1D7C2");
