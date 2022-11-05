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
	{ 0x38e46431, "mempool_exit" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x84808bcd, "cn_add_callback" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1015558b, "dm_get_device" },
	{ 0x83a48644, "dm_dirty_log_type_unregister" },
	{ 0xa8dca0ae, "dm_table_get_mode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7483e13, "cn_del_callback" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x35a6ab55, "dm_table_event" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9166fada, "strncpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12190772, "dm_dirty_log_type_register" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb8db3891, "dm_put_device" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x49cd25ed, "alloc_workqueue" },
};

MODULE_INFO(depends, "cn");


MODULE_INFO(srcversion, "40F633DE290CCF25F5D51CA");
