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
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xcf921aa6, "v4l2_ctrl_cluster" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0xff75c005, "v4l2_subdev_call_wrappers" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0xef146de1, "v4l2_ctrl_handler_log_status" },
	{ 0x92997ed8, "_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:cx25840");

MODULE_INFO(srcversion, "22E6C9B9F4DAA8FD7B6F10E");
