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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x158fef8d, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc313ff9a, "_dev_printk" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc565e30c, "iscsi_requeue_task" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd7cad581, "crypto_ahash_final" },
	{ 0xe25d2ee8, "iscsi_itt_to_ctask" },
	{ 0xf36e7877, "crypto_ahash_digest" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xbf693901, "skb_abort_seq_read" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1b80b530, "skb_prepare_seq_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xd9becf65, "iscsi_conn_teardown" },
	{ 0x90ed772d, "iscsi_put_task" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x13122667, "__traceiter_iscsi_dbg_tcp" },
	{ 0x509a6f2c, "__iscsi_get_task" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6ecf522, "iscsi_prep_data_out_pdu" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x161d9a38, "iscsi_complete_pdu" },
	{ 0xe16ff7e8, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc7a2afc7, "iscsi_dbg_trace" },
	{ 0xfd26c15b, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xaa976bb3, "__tracepoint_iscsi_dbg_tcp" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0xeb05b602, "iscsi_verify_itt" },
	{ 0xb4eb47df, "iscsi_conn_setup" },
	{ 0x3e099bd4, "iscsi_update_cmdsn" },
};

MODULE_INFO(depends, "libiscsi");


MODULE_INFO(srcversion, "ABEBA8894E05DBB9EB47211");
