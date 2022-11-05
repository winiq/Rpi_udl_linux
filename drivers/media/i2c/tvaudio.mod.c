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
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xcf921aa6, "v4l2_ctrl_cluster" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xef146de1, "v4l2_ctrl_handler_log_status" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x92997ed8, "_printk" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe3270f1b, "freezing_slow_path" },
	{ 0x1000e51, "schedule" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x97934ecf, "del_timer_sync" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:tvaudio");

MODULE_INFO(srcversion, "F009FEC257FFFF1B9F114ED");
