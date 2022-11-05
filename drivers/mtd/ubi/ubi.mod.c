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
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x3635eb6e, "cdev_del" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c81c627, "cdev_init" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xaaa86a12, "mtd_block_isbad" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4b9ffe04, "seq_open" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xc58fbe96, "mtd_get_device_size" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xaefa6b7, "mtd_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd19b5, "seq_read" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x69684655, "mtd_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xba7b3b54, "misc_register" },
	{ 0xbaf32e85, "kern_path" },
	{ 0xdcb764ad, "memset" },
	{ 0x7392091d, "device_register" },
	{ 0xe3270f1b, "freezing_slow_path" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x9b32533, "mtd_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe0fe63f4, "class_unregister" },
	{ 0xc69e4105, "put_mtd_device" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x10fe0392, "fixed_size_llseek" },
	{ 0x5a921311, "strncmp" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x1de95874, "simple_open" },
	{ 0xce807a25, "up_write" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0x57bc19d2, "down_write" },
	{ 0xbfa66cac, "mtd_block_markbad" },
	{ 0xd394de53, "cdev_add" },
	{ 0x8ced484a, "compat_ptr_ioctl" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x6587c97e, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0x8bc6bda8, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x9c1380cd, "get_mtd_device" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xec32f526, "path_put" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x78fb129, "get_mtd_device_nm" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xadc9aed4, "get_device" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xc0346142, "device_initialize" },
	{ 0xca9360b5, "rb_next" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0xd323ee88, "cdev_device_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbd20dd1d, "seq_release" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x8e46451f, "vfs_getattr" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x760a0f4f, "yield" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "7AADEC1A388F7F79C3223D2");
