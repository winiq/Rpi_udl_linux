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
	{ 0xcf921aa6, "v4l2_ctrl_cluster" },
	{ 0xc313ff9a, "_dev_printk" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xe3270f1b, "freezing_slow_path" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0xef146de1, "v4l2_ctrl_handler_log_status" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:msp3400");

MODULE_INFO(srcversion, "74FFF070FC5B1682A3D3D14");
