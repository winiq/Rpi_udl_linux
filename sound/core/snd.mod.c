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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x65cf0b29, "put_pid" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5dc00640, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x4f038094, "proc_symlink" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0xe5015e2e, "sound_class" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x1578e3fb, "devres_find" },
	{ 0x2f286539, "pid_vnr" },
	{ 0x416e5db, "single_release" },
	{ 0xf7a2cfc1, "stream_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x18888d00, "downgrade_write" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4b31b655, "kobject_set_name" },
	{ 0x6994a440, "__register_chrdev" },
	{ 0xdb65ede9, "proc_set_size" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd19b5, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x2c2a46a, "proc_remove" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x179b6ebe, "PDE_DATA" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x8b2b24a2, "proc_mkdir" },
	{ 0xb341ba23, "device_del" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0xd68955c5, "fasync_helper" },
	{ 0x93c1e1f1, "__devres_alloc_node" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0xd7367af8, "init_uts_ns" },
	{ 0x753af3ce, "device_add" },
	{ 0xce807a25, "up_write" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x61651be, "strcat" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x6587c97e, "module_put" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0x4cbc054a, "register_sound_special_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5933243, "input_free_device" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0xc3fe943f, "single_open_size" },
	{ 0x7ba780fd, "devres_add" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xadc9aed4, "get_device" },
	{ 0x435f0f05, "devm_remove_action" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x2f2a1413, "proc_create_data" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0xc0346142, "device_initialize" },
	{ 0x64144a1e, "proc_mkdir_mode" },
	{ 0x96848186, "scnprintf" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0xb4d6d6bf, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2e518b1f, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "66D3E4A793FEF407A37A3BD");
