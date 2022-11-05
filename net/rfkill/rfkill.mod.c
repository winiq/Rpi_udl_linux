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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc826e9aa, "led_trigger_event" },
	{ 0xf7a2cfc1, "stream_open" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x3e8e0bc0, "kobject_uevent" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe51baaf0, "input_unregister_handle" },
	{ 0x8c852f46, "led_trigger_register" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe97b1356, "input_register_handler" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xba7b3b54, "misc_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x22725c0b, "input_unregister_handler" },
	{ 0xb341ba23, "device_del" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdd84af6b, "input_close_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xebcad1ec, "led_trigger_unregister" },
	{ 0xe0fe63f4, "class_unregister" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1407156d, "input_open_device" },
	{ 0x753af3ce, "device_add" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8ced484a, "compat_ptr_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf3288300, "input_register_handle" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0346142, "device_initialize" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "45C5A5400CD9C35318658A7");
