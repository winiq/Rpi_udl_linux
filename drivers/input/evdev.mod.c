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
	{ 0xcc26711b, "no_llseek" },
	{ 0x22725c0b, "input_unregister_handler" },
	{ 0xe97b1356, "input_register_handler" },
	{ 0xceb0c6ff, "input_ff_upload" },
	{ 0x59b2adbf, "input_ff_effect_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x467cb61b, "input_grab_device" },
	{ 0x71a5181a, "input_ff_erase" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2c590987, "input_get_keycode" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4829a47e, "memcpy" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdd503c10, "input_set_keycode" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xee8708b8, "input_release_device" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1407156d, "input_open_device" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf7a2cfc1, "stream_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x92997ed8, "_printk" },
	{ 0x8bc6bda8, "cdev_device_add" },
	{ 0x3c81c627, "cdev_init" },
	{ 0xf3288300, "input_register_handle" },
	{ 0xc0346142, "device_initialize" },
	{ 0x82a7dbae, "input_class" },
	{ 0xadc9aed4, "get_device" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1b6c1d70, "input_inject_event" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x573f7538, "input_get_timestamp" },
	{ 0xd68955c5, "fasync_helper" },
	{ 0x81822a88, "put_device" },
	{ 0xe51baaf0, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0xd323ee88, "cdev_device_del" },
	{ 0xdd84af6b, "input_close_device" },
	{ 0x3940c7cb, "input_flush_device" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb4d6d6bf, "kill_fasync" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "8BAB34FFF087B7421922CBC");
