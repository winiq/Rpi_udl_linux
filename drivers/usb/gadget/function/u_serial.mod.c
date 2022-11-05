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
	{ 0xce93cf08, "tty_driver_kref_put" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x84f0547, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x526eef34, "tty_port_register_device" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x19421b50, "tty_port_init" },
	{ 0x347fae00, "tty_insert_flip_string_fixed_flag" },
	{ 0x9628d045, "tty_port_destroy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc1c1a42a, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb47bd909, "tty_unregister_driver" },
	{ 0x955fcad0, "tty_hangup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x9b4ba46c, "__tty_alloc_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8ba30826, "tty_wakeup" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E61A26C362F8727EF6D79CF");
