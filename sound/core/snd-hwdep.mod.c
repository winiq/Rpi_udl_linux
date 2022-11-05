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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3a918325, "snd_register_device" },
	{ 0xc39b86f4, "snd_card_file_remove" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x5be862ed, "snd_device_initialize" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x91c1958d, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0xdd64e639, "strscpy" },
	{ 0x140592da, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xc80ea389, "snd_device_new" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe2a02885, "snd_unregister_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6587c97e, "module_put" },
	{ 0x89b322be, "snd_card_file_add" },
	{ 0x8dfc76, "snd_ctl_register_ioctl" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xc283bcaa, "snd_register_oss_device" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc6d45488, "snd_unregister_oss_device" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a2e62da, "snd_info_free_entry" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x7dd97926, "snd_ctl_unregister_ioctl_compat" },
	{ 0x2f214be5, "snd_info_create_module_entry" },
	{ 0x9770d1d5, "snd_info_register" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "2F1902DAB3C617A971424F9");
